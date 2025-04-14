class Car {
    private final int speed; 
    private final int batteryDrain; 
    private int metersDriven = 0; 
    private int batteryLevel = 100; 

    public Car(int speed, int batteryDrain) {
        this.speed = speed; //this 키워드를 이용해 멤버필드와 매개변수 구분
        this.batteryDrain = batteryDrain; //this 키워드를 이용해 멤버필드와 매개변수 구분
    }

    public boolean batteryDrained() {
    	if (batteryLevel <= 0) {
    	    return true;}
    	else {
    	    return false;} //if~else 문을 통해 batteryLevel이 0 이하이면 true, 0 이상이면 false 를 반환
    }

    public int distanceDriven() {
        return metersDriven; //현재까지 주행거리 반환
    }

    public void drive() {
    	if (batteryLevel > batteryDrain) {
    	    metersDriven += speed; //배터리 레벨이 방전율보다 높은 경우 차량의 속도만큼 주행 거리 증가
    	    batteryLevel -= batteryDrain; //방전율만큼 배터리 감소
    	} else {
    	    batteryLevel = 0; //배터리 레벨이 방전율보다 낮은 경우 주행 불가
    	}

    }
}

class RaceTrack {
    private final int distance; 

    public RaceTrack(int distance) {
        this.distance = distance; //this 키워드를 이용해 멤버필드와 매개변수 구분
    }

    public boolean tryFinishTrack(Car car) {
        while (!car.batteryDrained() && car.distanceDriven() < distance) {
            car.drive(); //차량이 방전되지 않고 주행거리가 트랙의 길이보다 작으면 계속 주행
        }
        return car.distanceDriven() >= distance; //자동차가 트랙을 완주할 수 있으면 true, 그렇지 않으면 false 반환
    }
}

public class RaceDemo {
    public static void main(String[] args) {
        int speed = 5;
        int batteryDrain = 2;
        var yellowcar = new Car(speed, batteryDrain);
        yellowcar.drive();
        System.out.println(yellowcar.distanceDriven());
        System.out.println(yellowcar.batteryDrained());
        int distance = 100;
        var greencar = new Car(speed, batteryDrain);
        var race = new RaceTrack(distance);
        System.out.println(greencar.distanceDriven());
        System.out.println(race.tryFinishTrack(greencar));
        System.out.println(greencar.distanceDriven());
    }
}

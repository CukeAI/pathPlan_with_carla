client = carla.Client('localhost', 3000)
    client.set_timeout(5.0)
    world = client.get_world()
    
tm = client.get_trafficmanager(port)

tm_port = tm.get_port()
 for v in vehicles_list:
     v.set_autopilot(True,tm_port)


traffic_manager = client.get_trafficmanager(args.tm-port)
tm_port = traffic_manager.get_port()
# ...
batch.append(SpawnActor(blueprint, transform).then(SetAutopilot(FutureActor, True,tm_port)))
# ...
traffic_manager.global_percentage_speed_difference(30.0)

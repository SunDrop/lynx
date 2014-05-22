<?php

namespace Lynx\Stdlib\Events;

interface EventsManager
{

    /**
     * 
     * 	 * Attach a listener to the events manager
     * 	 *
     * 	 * @param string eventType
     * 	 * @param object handler
     * 	
     *
     * @param mixed $eventType 
     * @param mixed $handler 
     */
	public function attach($eventType, $handler);

    /**
     * 
     * 	 * Removes all events from the EventsManager
     * 	 *
     * 	 * @param string type
     * 	
     *
     * @param mixed $type 
     */
	public function dettachAll($type = null);

    /**
     * 
     * 	 * Fires a event in the events manager causing that the acive listeners will be notified about it
     * 	 *
     * 	 * @param string eventType
     * 	 * @param object source
     * 	 * @param mixed  data
     * 	 * @return mixed
     * 	
     *
     * @param mixed $eventType 
     * @param mixed $source 
     * @param mixed $data 
     */
	public function fire($eventType, $source, $data = null);

    /**
     * 
     * 	 * Returns all the attached listeners of a certain type
     * 	 *
     * 	 * @param string type
     * 	 * @return array
     * 	
     *
     * @param mixed $type 
     */
	public function getListeners($type);

}

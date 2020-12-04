#!/bin/sh
ifconfig -a | grep ether | awk -F 'ether ' '{print $2}'
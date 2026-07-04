/* Runtime dump - WeakPowerLogInterface
 * Image: /System/Library/PrivateFrameworks/CoreDuetAdmissionControlLog.framework/CoreDuetAdmissionControlLog
 */

@interface WeakPowerLogInterface : NSObject
{
    void * _PLLib;
    /* block */ id * _PLBatteryLifeMonitorLogCoreDuetEvent;
    /* block */ id * _PLBatteryLifeMonitorLogCoreDuetAdmissionEvent;
    /* block */ id * _PLBatteryLifeMonitorLogCoreDuetPredictionEvents;
}

@property void * PLLib;
@property /* block */ id * PLBatteryLifeMonitorLogCoreDuetEvent;
@property /* block */ id * PLBatteryLifeMonitorLogCoreDuetAdmissionEvent;
@property /* block */ id * PLBatteryLifeMonitorLogCoreDuetPredictionEvents;

- (void)dealloc;
- (WeakPowerLogInterface *)init;
- (void)logCoreDuetEventForClient:(unsigned long long)arg0 attributeID:(unsigned long long)arg1 attribute:(NSObject *)arg2 updateType:(unsigned int)arg3 sequenceNumber:(unsigned long long)arg4 event:(unsigned int)arg5 value:(NSObject *)arg6 cellIn:(unsigned long long)arg7 cellOut:(unsigned long long)arg8 wifiIn:(unsigned long long)arg9 wifiOut:(unsigned long long)arg10;
- (void)logCoreDuetAdmissionCheckForClient:(unsigned long long)arg0 attributeID:(unsigned long long)arg1 attribute:(NSObject *)arg2 value:(NSObject *)arg3 sequenceNumber:(unsigned long long)arg4 probability:(double)arg5 threshold:(double)arg6 BON:(unsigned long long)arg7 reason:(NSString *)arg8 admitted:(char)arg9 ableID:(unsigned long long)arg10;
- (void *)PLLib;
- (void)setPLLib:(void *)arg0;
- (/* block */ id *)PLBatteryLifeMonitorLogCoreDuetEvent;
- (void)setPLBatteryLifeMonitorLogCoreDuetEvent:(/* block */ id *)arg0;
- (/* block */ id *)PLBatteryLifeMonitorLogCoreDuetAdmissionEvent;
- (void)setPLBatteryLifeMonitorLogCoreDuetAdmissionEvent:(/* block */ id *)arg0;
- (/* block */ id *)PLBatteryLifeMonitorLogCoreDuetPredictionEvents;
- (void)setPLBatteryLifeMonitorLogCoreDuetPredictionEvents:(/* block */ id *)arg0;

@end

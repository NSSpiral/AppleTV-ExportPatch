/* Runtime dump - CDAdmissionControlLogWriter
 * Image: /System/Library/PrivateFrameworks/CoreDuetAdmissionControlLog.framework/CoreDuetAdmissionControlLog
 */

@interface CDAdmissionControlLogWriter : NSObject
{
    struct __asl_object_s * _ablemsg;
    struct __asl_object_s * _aslclient;
    WeakPowerLogInterface * _powerLog;
    char * _facility;
    NSString * _logfile;
}

@property struct __asl_object_s * ablemsg;
@property struct __asl_object_s * aslclient;
@property (retain) WeakPowerLogInterface * powerLog;
@property char * facility;
@property (retain) NSString * logfile;

- (CDAdmissionControlLogWriter *)init;
- (void).cxx_destruct;
- (char)truncate;
- (void)logCoreDuetEventForClient:(unsigned long long)arg0 attributeID:(unsigned long long)arg1 attribute:(NSObject *)arg2 updateType:(unsigned int)arg3 sequenceNumber:(unsigned long long)arg4 event:(unsigned int)arg5 value:(NSObject *)arg6 cellIn:(unsigned long long)arg7 cellOut:(unsigned long long)arg8 wifiIn:(unsigned long long)arg9 wifiOut:(unsigned long long)arg10;
- (void)logCoreDuetAdmissionCheckForClient:(unsigned long long)arg0 attributeID:(unsigned long long)arg1 attribute:(NSObject *)arg2 value:(NSObject *)arg3 sequenceNumber:(unsigned long long)arg4 probability:(double)arg5 threshold:(double)arg6 BON:(unsigned long long)arg7 reason:(NSString *)arg8 admitted:(char)arg9 ableID:(unsigned long long)arg10;
- (CDAdmissionControlLogWriter *)initWithLogFile:(NSString *)arg0;
- (struct __asl_object_s *)ablemsg;
- (void)setAblemsg:(struct __asl_object_s *)arg0;
- (struct __asl_object_s *)aslclient;
- (void)setAslclient:(struct __asl_object_s *)arg0;
- (CDAdmissionControlLogWriter *)initWithLogFile:(NSString *)arg0 forFacility:(id)arg1;
- (CDAdmissionControlLogWriter *)initWithFacility:(char *)arg0;
- (NSDictionary *)serialiseDictionary:(NSDictionary *)arg0;
- (void)logDictionary:(NSDictionary *)arg0 withMsg:(struct __asl_object_s *)arg1;
- (void)logCoreDuetEventForDevice:(unsigned int)arg0 remoteDevice:(unsigned int)arg1 Client:(unsigned long long)arg2 attributeID:(unsigned long long)arg3 attribute:(NSObject *)arg4 updateType:(unsigned int)arg5 sequenceNumber:(unsigned long long)arg6 event:(unsigned int)arg7 value:(NSObject *)arg8 cellIn:(unsigned long long)arg9 cellOut:(unsigned long long)arg10 wifiIn:(unsigned long long)arg11 wifiOut:(unsigned long long)arg12;
- (void)logDictionary:(NSDictionary *)arg0;
- (void)logCoreDuetEventStartForDevice:(unsigned int)arg0 remoteDevice:(unsigned int)arg1 Client:(unsigned long long)arg2 attributeID:(unsigned long long)arg3 attribute:(NSObject *)arg4 updateType:(unsigned int)arg5 sequenceNumber:(unsigned long long)arg6 value:(NSObject *)arg7;
- (void)logCoreDuetEventStopForDevice:(unsigned int)arg0 remoteDevice:(unsigned int)arg1 Client:(unsigned long long)arg2 attributeID:(unsigned long long)arg3 attribute:(NSObject *)arg4 updateType:(unsigned int)arg5 sequenceNumber:(unsigned long long)arg6 value:(NSObject *)arg7 cellIn:(unsigned long long)arg8 cellOut:(unsigned long long)arg9 wifiIn:(unsigned long long)arg10 wifiOut:(unsigned long long)arg11;
- (void)logCoreDuetAdmissionCheckForClient:(unsigned long long)arg0 attributeID:(unsigned long long)arg1 attribute:(NSObject *)arg2 value:(NSObject *)arg3 sequenceNumber:(unsigned long long)arg4 probability:(double)arg5 threshold:(double)arg6 BON:(unsigned long long)arg7 role:(unsigned int)arg8 reason:(NSString *)arg9 admitted:(char)arg10 ableID:(unsigned long long)arg11;
- (WeakPowerLogInterface *)powerLog;
- (void)logCoreDuetAdmissionCheckForDevice:(unsigned int)arg0 remoteDevice:(unsigned int)arg1 Client:(unsigned long long)arg2 attributeID:(unsigned long long)arg3 attribute:(NSObject *)arg4 value:(NSObject *)arg5 sequenceNumber:(unsigned long long)arg6 probability:(double)arg7 threshold:(double)arg8 BON:(unsigned long long)arg9 role:(unsigned int)arg10 reason:(NSString *)arg11 admitted:(char)arg12 ableID:(unsigned long long)arg13;
- (void)logCoreDuetEventStartForClient:(unsigned long long)arg0 attributeID:(unsigned long long)arg1 attribute:(NSObject *)arg2 updateType:(unsigned int)arg3 sequenceNumber:(unsigned long long)arg4 value:(NSObject *)arg5;
- (void)logCoreDuetEventStopForClient:(unsigned long long)arg0 attributeID:(unsigned long long)arg1 attribute:(NSObject *)arg2 updateType:(unsigned int)arg3 sequenceNumber:(unsigned long long)arg4 value:(NSObject *)arg5 cellIn:(unsigned long long)arg6 cellOut:(unsigned long long)arg7 wifiIn:(unsigned long long)arg8 wifiOut:(unsigned long long)arg9;
- (void)setPowerLog:(WeakPowerLogInterface *)arg0;
- (char *)facility;
- (void)setFacility:(char *)arg0;
- (NSString *)logfile;
- (void)setLogfile:(NSString *)arg0;
- (void)logString:(NSString *)arg0;

@end

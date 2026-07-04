/* Runtime dump - CDAdmissionControlLogReader
 * Image: /System/Library/PrivateFrameworks/CoreDuetAdmissionControlLog.framework/CoreDuetAdmissionControlLog
 */

@interface CDAdmissionControlLogReader : NSObject
{
    struct __asl_object_s * _ablemsg;
    struct __asl_object_s * _aslclient;
    NSMutableDictionary * _invalidKeys;
}

@property struct __asl_object_s * ablemsg;
@property struct __asl_object_s * aslclient;
@property (retain) NSMutableDictionary * invalidKeys;

- (void)dealloc;
- (CDAdmissionControlLogReader *)init;
- (void).cxx_destruct;
- (CDAdmissionControlLogReader *)initWithLogFile:(NSString *)arg0;
- (char)isValidKey:(NSString *)arg0;
- (NSString *)nsValueFromString:(NSString *)arg0;
- (id)readAll;
- (id)readTail:(unsigned int)arg0;
- (NSDate *)readSinceDate:(NSDate *)arg0 limit:(unsigned int)arg1;
- (struct __asl_object_s *)ablemsg;
- (void)setAblemsg:(struct __asl_object_s *)arg0;
- (struct __asl_object_s *)aslclient;
- (void)setAslclient:(struct __asl_object_s *)arg0;
- (NSMutableDictionary *)invalidKeys;
- (void)setInvalidKeys:(NSMutableDictionary *)arg0;

@end

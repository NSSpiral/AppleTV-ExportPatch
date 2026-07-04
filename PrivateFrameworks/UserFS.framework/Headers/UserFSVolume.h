/* Runtime dump - UserFSVolume
 * Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@interface UserFSVolume : NSObject
{
    char _isLocked;
    NSString * _deviceName;
    NSObject<OS_xpc_object> * _connection;
}

@property (readonly, copy, nonatomic) NSString * deviceName;
@property (readonly, nonatomic) char isLocked;
@property (retain, nonatomic) NSObject<OS_xpc_object> * connection;

+ (NSString *)volumeWithDeviceName:(NSString *)arg0 error:(id *)arg1;
+ (char)prepareToAccessDeviceName:(NSString *)arg0 error:(id *)arg1;

- (NSString *)itemAtPath:(NSString *)arg0 error:(id *)arg1;
- (UserFSVolume *)initWithDeviceName:(NSString *)arg0 error:(id *)arg1;
- (char)closeAndReturnError:(id *)arg0;
- (void)dealloc;
- (char)isLocked;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)connection;
- (void)setConnection:(NSObject<OS_xpc_object> *)arg0;
- (NSString *)deviceName;
- (NSError *)rootDirectoryAndReturnError:(id *)arg0;
- (char)flushAndReturnError:(id *)arg0;
- (char)deleteFiles:(id)arg0 error:(id *)arg1;

@end

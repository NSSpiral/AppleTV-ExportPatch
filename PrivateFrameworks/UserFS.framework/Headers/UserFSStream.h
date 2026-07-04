/* Runtime dump - UserFSStream
 * Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@interface UserFSStream : NSObject
{
    UserFSItem * _item;
    NSObject<OS_xpc_object> * _connection;
    unsigned long long _length;
}

@property (retain, nonatomic) UserFSItem * item;
@property (readonly, nonatomic) char writable;
@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) NSObject<OS_xpc_object> * connection;

- (long)readBytesOfLength:(unsigned long)arg0 atOffset:(unsigned long long)arg1 toBuffer:(void *)arg2 error:(id *)arg3;
- (char)closeAndReturnError:(id *)arg0;
- (char)writable;
- (void)dealloc;
- (UserFSItem *)item;
- (unsigned long long)length;
- (void)setItem:(UserFSItem *)arg0;
- (void)setLength:(unsigned long long)arg0;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)connection;
- (void)setConnection:(NSObject<OS_xpc_object> *)arg0;
- (void)_cancelConnection;
- (UserFSStream *)initWithUserFSItem:(NSObject *)arg0 length:(unsigned long long)arg1 connection:(NSObject<OS_xpc_object> *)arg2;
- (long)_readBytesUpToLength:(unsigned long)arg0 atOffset:(unsigned long long)arg1 toBuffer:(void *)arg2 error:(id *)arg3;

@end

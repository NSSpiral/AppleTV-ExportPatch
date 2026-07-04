/* Runtime dump - IDSConnection
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSConnection : NSObject
{
    _IDSConnection * _internal;
}

@property (readonly, retain, nonatomic) IDSAccount * account;
@property (readonly, nonatomic) char isActive;
@property (readonly, retain, nonatomic) _IDSConnection * _internal;

- (_IDSConnection *)_internal;
- (void)dealloc;
- (char)isActive;
- (char)sendData:(NSData *)arg0 toDestinations:(NSArray *)arg1 priority:(int)arg2 options:(NSDictionary *)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (IDSConnection *)initWithAccount:(IDSAccount *)arg0;
- (IDSAccount *)account;
- (void)addDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (char)sendMessage:(NSString *)arg0 toDestinations:(NSArray *)arg1 priority:(int)arg2 options:(NSDictionary *)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (void)removeDelegate:(NSObject *)arg0;
- (IDSConnection *)initWithAccount:(IDSAccount *)arg0 commands:(NSSet *)arg1;
- (char)sendProtobuf:(id)arg0 toDestinations:(NSArray *)arg1 priority:(int)arg2 options:(NSDictionary *)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (NSNumber *)_initWithAccount:(IDSAccount *)arg0 commands:(NSSet *)arg1 indirectDelegateCallouts:(char)arg2;
- (char)sendMessage:(NSString *)arg0 toDestinations:(NSArray *)arg1 options:(NSDictionary *)arg2 identifier:(id *)arg3 error:(id *)arg4;

@end

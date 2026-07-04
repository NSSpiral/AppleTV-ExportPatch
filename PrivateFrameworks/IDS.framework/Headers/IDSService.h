/* Runtime dump - IDSService
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSService : NSObject
{
    _IDSService * _internal;
}

@property (readonly, copy, nonatomic) NSSet * accounts;
@property (readonly, copy, nonatomic) NSArray * devices;
@property (readonly, retain, nonatomic) _IDSService * _internal;

+ (char)checkMessageSize:(unsigned int)arg0 priority:(int)arg1;

- (_IDSService *)_internal;
- (void)dealloc;
- (char)sendData:(NSData *)arg0 toDestinations:(NSArray *)arg1 priority:(int)arg2 options:(NSDictionary *)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (NSString *)serviceDomain;
- (char)sendMessage:(NSString *)arg0 fromAccount:(NSObject *)arg1 toDestinations:(NSArray *)arg2 priority:(int)arg3 options:(NSDictionary *)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (NSArray *)devices;
- (IDSService *)initWithService:(NSObject *)arg0;
- (void)addDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (NSSet *)accounts;
- (NSNumber *)iCloudAccount;
- (char)sendMessage:(NSString *)arg0 toDestinations:(NSArray *)arg1 priority:(int)arg2 options:(NSDictionary *)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (void)removeDelegate:(NSObject *)arg0;
- (char)sendProtobuf:(id)arg0 toDestinations:(NSArray *)arg1 priority:(int)arg2 options:(NSDictionary *)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (IDSService *)initWithService:(NSObject *)arg0 commands:(NSSet *)arg1;
- (char)sendProtobuf:(id)arg0 fromAccount:(NSObject *)arg1 toDestinations:(NSArray *)arg2 priority:(int)arg3 options:(NSDictionary *)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (char)sendData:(NSData *)arg0 fromAccount:(NSObject *)arg1 toDestinations:(NSArray *)arg2 priority:(int)arg3 options:(NSDictionary *)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (char)sendData:(NSData *)arg0 priority:(int)arg1 options:(NSDictionary *)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (char)cancelIdentifier:(NSString *)arg0 error:(id *)arg1;
- (char)sendServerMessage:(NSString *)arg0 command:(NSObject *)arg1 fromAccount:(NSObject *)arg2;
- (NSObject *)deviceForFromID:(NSObject *)arg0;
- (NSObject *)uriForFromID:(NSObject *)arg0;
- (void)setPreferInfraWiFi:(char)arg0;
- (void)setPretendingToBeFull:(char)arg0;
- (char)isPretendingToBeFull;
- (IDSService *)initWithService:(NSObject *)arg0 serviceDomain:(NSString *)arg1;
- (void)setProtobufAction:(SEL)arg0 forIncomingRequestsOfType:(unsigned short)arg1;
- (void)setProtobufAction:(SEL)arg0 forIncomingResponsesOfType:(unsigned short)arg1;
- (SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg0;
- (SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg0;
- (char)sendMessage:(NSString *)arg0 fromAccount:(NSObject *)arg1 toDestinations:(NSArray *)arg2 options:(NSDictionary *)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (char)sendResourceAtURL:(NSURL *)arg0 metadata:(NSDictionary *)arg1 toDestinations:(NSArray *)arg2 priority:(int)arg3 options:(NSDictionary *)arg4 identifier:(id *)arg5 error:(id *)arg6;

@end

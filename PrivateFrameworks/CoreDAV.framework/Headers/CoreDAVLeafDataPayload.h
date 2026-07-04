/* Runtime dump - CoreDAVLeafDataPayload
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload>
{
    NSURL * _serverID;
    NSString * _syncKey;
    NSData * _dataPayload;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) NSURL * serverID;
@property (readonly, nonatomic) NSData * dataPayload;
@property (readonly, nonatomic) NSString * syncKey;
@property (readonly, nonatomic) NSArray * childrenOrder;

- (void)dealloc;
- (NSURL *)serverID;
- (void)setServerID:(NSURL *)arg0;
- (CoreDAVLeafDataPayload *)initWithURL:(NSString *)arg0 eTag:(NSString *)arg1 dataPayload:(NSData *)arg2 inContainerWithURL:(NSString *)arg3 withAccountInfoProvider:(NSDictionary *)arg4;
- (NSData *)dataPayload;
- (NSString *)syncKey;

@end

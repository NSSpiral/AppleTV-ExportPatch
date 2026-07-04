/* Runtime dump - AXHAUtilities
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAUtilities : NSObject <MPAVRoutingControllerDelegate>
{
    MPAVRoutingController * _routingController;
    char _hearingAidRouteAvailable;
}

@property (nonatomic) char hearingAidRouteAvailable;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)objectFromXDCObject:(NSObject *)arg0;
+ (NSObject *)XDCObjectFromObject:(NSObject *)arg0;
+ (NSString *)dictionaryFromXPCMessage:(NSString *)arg0 error:(id *)arg1;
+ (NSDictionary *)messagePayloadFromDictionary:(NSDictionary *)arg0 andIdentifier:(unsigned long long)arg1;
+ (NSDictionary *)copyXPCMessageFromDictionary:(NSDictionary *)arg0 inReplyToXPCMessage:(NSString *)arg1 error:(id *)arg2;
+ (AXHAUtilities *)sharedUtilityProvider;

- (void)routingControllerAvailableRoutesDidChange:(MPAVRoutingController *)arg0;
- (void)dealloc;
- (AXHAUtilities *)init;
- (char)hearingAidRouteAvailable;
- (char)hearingAidStreamSelected;
- (void)routesDidChange:(NSDictionary *)arg0;
- (void)setHearingAidRouteAvailable:(char)arg0;

@end

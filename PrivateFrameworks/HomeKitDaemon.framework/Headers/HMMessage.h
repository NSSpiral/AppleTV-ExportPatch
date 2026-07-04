/* Runtime dump - HMMessage
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMMessage : NSObject
{
    char _remoteSource;
    char _internalMessage;
    char _entitledMessage;
    char _locationAuthorizedMessage;
    NSString * _name;
    NSUUID * _identifier;
    NSDictionary * _messagePayload;
    id _responseHandler;
    id _transport;
}

@property (readonly, nonatomic) char authorizedForHomeDataAccess;
@property (readonly, nonatomic) char entitledForAPIAccess;
@property (readonly, nonatomic) char entitledForSPIAccess;
@property (readonly, nonatomic) char authorizedForLocationAccess;
@property (readonly, nonatomic) char entitledForBackgroundMode;
@property (readonly, nonatomic) int sourcePid;
@property (readonly, copy, nonatomic) NSString * applicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString * companionAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString * teamIdentifier;
@property (readonly, copy, nonatomic) NSString * effectiveLocationBundleIdentifier;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSUUID * identifier;
@property (readonly, nonatomic) NSDictionary * messagePayload;
@property (readonly, nonatomic) id responseHandler;
@property (readonly, nonatomic) id transport;
@property (readonly, nonatomic) char remoteSource;
@property (readonly, nonatomic) char internalMessage;
@property (readonly, nonatomic) char entitledMessage;
@property (readonly, nonatomic) char locationAuthorizedMessage;

+ (HMMessage *)messageWithName:(NSString *)arg0 messagePayload:(NSDictionary *)arg1;
+ (HMMessage *)messageWithName:(NSString *)arg0 identifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2;
+ (NSString *)internalMessageWithName:(NSString *)arg0 messagePayload:(NSDictionary *)arg1;
+ (HMMessage *)messageWithName:(NSString *)arg0 identifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 remoteSource:(char)arg3;
+ (HMMessage *)messageWithName:(NSString *)arg0 messagePayload:(NSDictionary *)arg1 transport:(HMDIDSMessageTransport *)arg2 responseHandler:(id /* block */)arg3;
+ (NSString *)entitledMessageWithName:(NSString *)arg0 identifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2;
+ (HMMessage *)messageWithName:(NSString *)arg0 messagePayload:(NSDictionary *)arg1 responseHandler:(id /* block */)arg2;
+ (NSString *)entitledMessageWithName:(NSString *)arg0 messagePayload:(NSDictionary *)arg1;
+ (HMMessage *)messageWithName:(NSString *)arg0 identifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 responseHandler:(id /* block */)arg3;
+ (NSString *)internalMessageWithName:(NSString *)arg0 messagePayload:(NSDictionary *)arg1 responseHandler:(id /* block */)arg2;
+ (NSString *)locationAuthorizedMessageWithName:(NSString *)arg0 messagePayload:(NSDictionary *)arg1;
+ (HMMessage *)messageWithName:(NSString *)arg0 identifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 remoteSource:(char)arg3 responseHandler:(id /* block */)arg4;
+ (HMMessage *)messageWithName:(NSString *)arg0 identifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 transport:(HMDIDSMessageTransport *)arg3 responseHandler:(id /* block */)arg4;
+ (HMMessage *)messageWithName:(NSString *)arg0 identifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 transport:(HMDIDSMessageTransport *)arg3;
+ (HMMessage *)messageWithMessage:(NSString *)arg0 messagePayload:(NSDictionary *)arg1 responseHandler:(id /* block */)arg2;
+ (HMMessage *)messageWithName:(NSString *)arg0 messagePayload:(NSDictionary *)arg1 transport:(HMDIDSMessageTransport *)arg2;
+ (HMMessage *)messageWithMessage:(NSString *)arg0 messagePayload:(NSDictionary *)arg1;

- (char)boolForKey:(NSString *)arg0;
- (NSString *)name;
- (NSUUID *)identifier;
- (NSString *)stringForKey:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)dictionaryForKey:(NSString *)arg0;
- (char)boolForKey:(NSString *)arg0 keyPresent:(char *)arg1;
- (NSString *)numberForKey:(NSString *)arg0;
- (NSString *)uuidForKey:(NSString *)arg0;
- (NSString *)dateForKey:(NSString *)arg0;
- (NSString *)timeZoneForKey:(NSString *)arg0;
- (NSString *)dateComponentsForKey:(NSString *)arg0;
- (NSString *)errorForKey:(NSString *)arg0;
- (NSString *)calendarForKey:(NSString *)arg0;
- (NSString *)nullForKey:(NSString *)arg0;
- (id /* block */)responseHandler;
- (NSDictionary *)messagePayload;
- (char)isRemoteSource;
- (NSString *)uuidFromRemoteMessageForKey:(NSString *)arg0;
- (char)isAuthorizedForLocationAccess;
- (NSString *)predicateForKey:(NSString *)arg0;
- (char)isEntitledForSPIAccess;
- (<HMMessageTransport> *)transport;
- (char)isInternalMessage;
- (char)isEntitledMessage;
- (char)isLocationAuthorizedMessage;
- (NSString *)companionAppBundleIdentifier;
- (NSString *)teamIdentifier;
- (char)isAuthorizedForHomeDataAccess;
- (NSString *)applicationBundleIdentifier;
- (NSString *)effectiveLocationBundleIdentifier;
- (char)isEntitledForAPIAccess;
- (char)isEntitledForBackgroundMode;
- (NSURLConnection *)proxyConnection;
- (int)sourcePid;
- (char)_supportsFeature:(unsigned int)arg0 forCapabilitiesKey:(NSString *)arg1;
- (char)supportsRequiredFeature:(unsigned int)arg0;
- (char)supportsRequestedFeature:(unsigned int)arg0;
- (HMMessage *)initWithName:(NSString *)arg0 identifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 transport:(HMDIDSMessageTransport *)arg3 responseHandler:(id /* block */)arg4 remoteSource:(/* block */ id)arg5 internalMessage:(char)arg6 entitledMessage:(char)arg7 locationAuthorizedMessage:(char)arg8;
- (NSString *)locationForKey:(NSString *)arg0;
- (NSString *)dataForKey:(NSString *)arg0;
- (NSString *)arrayForKey:(NSString *)arg0;

@end

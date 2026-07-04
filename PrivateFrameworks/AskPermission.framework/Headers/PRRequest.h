/* Runtime dump - PRRequest
 * Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

@interface PRRequest : NSObject <NSSecureCoding>
{
    char _requestedOnThisDevice;
    NSString * _requestID;
    NSString * _ask;
    NSDictionary * _requestInfo;
    unsigned int _requestStatus;
    NSNumber * _requesterDSID;
    NSNumber * _responderDSID;
    NSString * _clientIdentifier;
    NSDate * _dateAddedToLocalCache;
}

@property (copy) NSString * requestID;
@property (copy) NSString * ask;
@property (copy) NSDictionary * requestInfo;
@property unsigned int requestStatus;
@property (copy) NSNumber * requesterDSID;
@property (copy) NSNumber * responderDSID;
@property (copy) NSString * clientIdentifier;
@property char requestedOnThisDevice;
@property (copy) NSDate * dateAddedToLocalCache;
@property (readonly) NSString * statusDescription;

+ (char)supportsSecureCoding;

- (NSString *)requestID;
- (NSString *)clientIdentifier;
- (PRRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)setClientIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (NSNumber *)requesterDSID;
- (NSNumber *)responderDSID;
- (char)requestedOnThisDevice;
- (NSDate *)dateAddedToLocalCache;
- (NSDictionary *)requestInfo;
- (PRRequest *)initWithAsk:(NSString *)arg0 requestInfo:(NSDictionary *)arg1;
- (NSDictionary *)cacheRepresentation;
- (NSString *)ask;
- (void)setAsk:(NSString *)arg0;
- (void)setRequestInfo:(NSDictionary *)arg0;
- (void)setRequesterDSID:(NSNumber *)arg0;
- (void)setResponderDSID:(NSNumber *)arg0;
- (void)setRequestedOnThisDevice:(char)arg0;
- (void)setDateAddedToLocalCache:(NSDate *)arg0;
- (unsigned int)requestStatus;
- (void)setRequestStatus:(unsigned int)arg0;
- (NSString *)statusDescription;
- (void)setRequestID:(NSString *)arg0;
- (PRRequest *)initWithCacheRepresentation:(NSDictionary *)arg0;

@end

/* Runtime dump - FMFFriendshipRequest
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>
{
    int _requestType;
    FMFHandle * _fromHandle;
    NSSet * _toHandles;
    NSDate * _endDate;
    NSString * _groupId;
    NSString * _requestId;
}

@property (nonatomic) int requestType;
@property (retain, nonatomic) FMFHandle * fromHandle;
@property (retain, nonatomic) NSSet * toHandles;
@property (retain, nonatomic) NSDate * endDate;
@property (retain, nonatomic) NSString * groupId;
@property (retain, nonatomic) NSString * requestId;

+ (char)supportsSecureCoding;
+ (FMFFriendshipRequest *)friendshipRequestToHandles:(id)arg0 fromHandle:(FMFHandle *)arg1 withType:(int)arg2 groupId:(NSString *)arg3 withEndDate:(NSDate *)arg4;

- (FMFFriendshipRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (FMFFriendshipRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)requestId;
- (void)setRequestId:(NSString *)arg0;
- (void)setFromHandle:(FMFHandle *)arg0;
- (void)setToHandles:(NSSet *)arg0;
- (FMFHandle *)fromHandle;
- (NSSet *)toHandles;
- (FMFFriendshipRequest *)initWithFromHandle:(FMFHandle *)arg0 toHandle:(_NSStdIOFileHandle *)arg1 ofType:(int)arg2 groupId:(NSString *)arg3 endDate:(NSDate *)arg4 requestId:(NSString *)arg5;
- (NSString *)groupId;
- (void)setGroupId:(NSString *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (void)setRequestType:(int)arg0;
- (int)requestType;
- (NSDate *)endDate;

@end

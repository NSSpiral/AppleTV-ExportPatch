/* Runtime dump - BBBulletinRequestParameters
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _publisherDestination;
    int _maximumCount;
    NSSet * _enabledSectionIDs;
}

@property (readonly, nonatomic) unsigned int publisherDestination;
@property (readonly, nonatomic) unsigned int maximumCount;
@property (readonly, nonatomic) NSSet * enabledSectionIDs;

+ (char)supportsSecureCoding;
+ (NSObject *)requestParametersForDestination:(unsigned int)arg0 withMaximumCount:(int)arg1 enabledSectionIDs:(NSSet *)arg2;

- (void)dealloc;
- (BBBulletinRequestParameters *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (BBBulletinRequestParameters *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)maximumCount;
- (BBBulletinRequestParameters *)initWithDestination:(unsigned int)arg0 maximumCount:(int)arg1 enabledSectionIDs:(NSSet *)arg2;
- (NSSet *)enabledSectionIDs;
- (unsigned int)publisherDestination;

@end

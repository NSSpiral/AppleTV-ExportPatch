/* Runtime dump - BKSEventFocusDeferral
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding>
{
    BKSEventFocusDeferralProperties * _properties;
    BKSEventFocusDeferralProperties * _deferredProperties;
}

@property (readonly, nonatomic) BKSEventFocusDeferralProperties * properties;
@property (readonly, nonatomic) BKSEventFocusDeferralProperties * deferredProperties;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (BKSEventFocusDeferral *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BKSEventFocusDeferralProperties *)properties;
- (BKSEventFocusDeferral *)initWithProperties:(BKSEventFocusDeferralProperties *)arg0 deferredProperties:(BKSEventFocusDeferralProperties *)arg1;
- (char)defersProperties:(NSDictionary *)arg0;
- (BKSEventFocusDeferralProperties *)deferredProperties;
- (NSDictionary *)deferredPropertiesForProperties:(NSDictionary *)arg0;

@end

/* Runtime dump - CalMeCard
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalMeCard : NSObject <NSSecureCoding>
{
    NSString * _displayName;
    NSArray * _emailAddresses;
    NSString * _uniqueID;
    int _version;
}

@property (readonly, retain) NSString * displayName;
@property (readonly, retain) NSArray * emailAddresses;
@property (readonly, retain) NSString * uniqueID;
@property int version;

+ (char)supportsSecureCoding;
+ (NSString *)cardFromPath:(NSString *)arg0;

- (CalMeCard *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setVersion:(int)arg0;
- (int)version;
- (void).cxx_destruct;
- (NSString *)displayName;
- (char)isEqualToMeCard:(id)arg0;
- (CalMeCard *)initWithDisplayName:(NSString *)arg0 emailAddresses:(NSArray *)arg1 uniqueID:(NSString *)arg2;
- (NSString *)preferredEmailAddress;
- (char)writeToPath:(NSString *)arg0;
- (NSArray *)emailAddresses;
- (NSString *)uniqueID;

@end

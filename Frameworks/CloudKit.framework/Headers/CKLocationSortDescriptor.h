/* Runtime dump - CKLocationSortDescriptor
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding>
{
    CLLocation * _relativeLocation;
}

@property (copy, nonatomic) CLLocation * relativeLocation;

+ (char)supportsSecureCoding;

- (NSObject *)CKDPQuerySort;
- (void)setRelativeLocation:(CLLocation *)arg0;
- (CKLocationSortDescriptor *)initWithKey:(NSString *)arg0 relativeLocation:(CLLocation *)arg1;
- (int)compareObject:(NSObject *)arg0 toObject:(NSObject *)arg1;
- (CKLocationSortDescriptor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CKLocationSortDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;
- (CLLocation *)relativeLocation;

@end

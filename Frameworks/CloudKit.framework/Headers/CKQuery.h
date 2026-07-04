/* Runtime dump - CKQuery
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _recordType;
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
}

@property (copy, nonatomic) NSString * recordType;
@property (copy, nonatomic) NSPredicate * predicate;
@property (copy, nonatomic) NSArray * sortDescriptors;

+ (char)supportsSecureCoding;

- (CKQuery *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKQuery *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (CKQuery *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void)setSortDescriptors:(NSArray *)arg0;
- (NSArray *)sortDescriptors;
- (void).cxx_destruct;
- (NSString *)recordType;
- (CKQuery *)initWithRecordType:(NSString *)arg0 predicate:(NSPredicate *)arg1;
- (NSString *)CKPropertiesDescription;
- (void)setRecordType:(NSString *)arg0;

@end

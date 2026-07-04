/* Runtime dump - CKOperationResult
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationResult : NSObject <NSSecureCoding>
{
    NSString * _operationID;
    NSError * _error;
    NSArray * _requestUUIDs;
}

@property (retain, nonatomic) NSString * operationID;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) NSArray * requestUUIDs;

+ (char)supportsSecureCoding;

- (CKOperationResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)operationID;
- (NSError *)error;
- (void)setOperationID:(NSString *)arg0;
- (NSString *)CKPropertiesDescription;
- (NSArray *)requestUUIDs;
- (void)setRequestUUIDs:(NSArray *)arg0;
- (void)setError:(NSError *)arg0;

@end

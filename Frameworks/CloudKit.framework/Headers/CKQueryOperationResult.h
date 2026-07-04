/* Runtime dump - CKQueryOperationResult
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperationResult : CKOperationResult <NSSecureCoding>
{
    CKQueryCursor * _cursor;
}

@property (retain, nonatomic) CKQueryCursor * cursor;

+ (char)supportsSecureCoding;

- (CKQueryOperationResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CKQueryCursor *)cursor;
- (void)setCursor:(CKQueryCursor *)arg0;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;

@end

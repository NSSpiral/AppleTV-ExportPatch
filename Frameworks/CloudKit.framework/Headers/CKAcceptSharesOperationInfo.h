/* Runtime dump - CKAcceptSharesOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _shareURLsToAccept;
}

@property (retain, nonatomic) NSArray * shareURLsToAccept;

+ (char)supportsSecureCoding;

- (CKAcceptSharesOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)shareURLsToAccept;
- (void)setShareURLsToAccept:(NSArray *)arg0;

@end

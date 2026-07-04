/* Runtime dump - CKFetchShareInfoOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareInfoOperationInfo : CKOperationInfo
{
    NSArray * _shareURLsToFetch;
}

@property (retain, nonatomic) NSArray * shareURLsToFetch;

+ (char)supportsSecureCoding;

- (CKFetchShareInfoOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)shareURLsToFetch;
- (void)setShareURLsToFetch:(NSArray *)arg0;

@end

/* Runtime dump - CKArchivedAnchoredPackage
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKArchivedAnchoredPackage : NSObject <NSSecureCoding>
{
    NSString * _anchorPath;
    NSString * _packagePath;
    NSString * _UUID;
    NSArray * _assets;
}

@property (retain, nonatomic) NSString * anchorPath;
@property (retain, nonatomic) NSString * packagePath;
@property (retain, nonatomic) NSString * UUID;
@property (retain, nonatomic) NSArray * assets;

+ (char)supportsSecureCoding;

- (NSString *)anchorPath;
- (CKArchivedAnchoredPackage *)initWithCKPackage:(CKPackage *)arg0;
- (void)setAnchorPath:(NSString *)arg0;
- (NSString *)packagePath;
- (void)setPackagePath:(NSString *)arg0;
- (CKArchivedAnchoredPackage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)UUID;
- (CKArchivedAnchoredPackage *)awakeAfterUsingCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)assets;
- (void)setUUID:(NSSet *)arg0;
- (void)setAssets:(NSArray *)arg0;

@end

/* Runtime dump - CKPCSDiagnosticInformation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding>
{
    NSString * _identityInfo;
    NSString * _serviceIdentityInfo;
    NSMutableDictionary * _pcsInfoByZoneID;
    NSMutableArray * _notFoundZoneIDs;
}

@property (retain, nonatomic) NSString * identityInfo;
@property (retain, nonatomic) NSString * serviceIdentityInfo;
@property (retain, nonatomic) NSMutableDictionary * pcsInfoByZoneID;
@property (retain, nonatomic) NSMutableArray * notFoundZoneIDs;

+ (char)supportsSecureCoding;

- (NSString *)identityInfo;
- (NSString *)serviceIdentityInfo;
- (void)setNotFoundZoneIDs:(NSMutableArray *)arg0;
- (CKPCSDiagnosticInformation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKPCSDiagnosticInformation *)init;
- (void).cxx_destruct;
- (NSMutableDictionary *)pcsInfoByZoneID;
- (void)setPcsInfoByZoneID:(NSMutableDictionary *)arg0;
- (void)setIdentityInfo:(NSString *)arg0;
- (void)setServiceIdentityInfo:(NSString *)arg0;
- (NSMutableArray *)notFoundZoneIDs;

@end

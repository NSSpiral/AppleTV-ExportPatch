/* Runtime dump - CKZonePCSDiagnosticInformation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding>
{
    char _wasRepaired;
    int _pcsStatus;
    NSString * _pcsDiagnosticString;
    NSError * _pcsError;
}

@property (nonatomic) char wasRepaired;
@property (nonatomic) int pcsStatus;
@property (retain, nonatomic) NSString * pcsDiagnosticString;
@property (retain, nonatomic) NSError * pcsError;

+ (char)supportsSecureCoding;

- (char)wasRepaired;
- (NSString *)pcsDiagnosticString;
- (NSError *)pcsError;
- (CKZonePCSDiagnosticInformation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setPcsError:(NSError *)arg0;
- (void)setPcsStatus:(int)arg0;
- (void)setPcsDiagnosticString:(NSString *)arg0;
- (int)pcsStatus;
- (void)setWasRepaired:(char)arg0;

@end

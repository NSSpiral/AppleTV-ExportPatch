/* Runtime dump - CertInfoBasicTrustDescription
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription>
{
    struct __SecTrust * _trust;
    int _action;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (CertInfoBasicTrustDescription *)initWithTrust:(struct __SecTrust *)arg0 action:(int)arg1;
- (NSDate *)_expirationDate;
- (unsigned int)certificateCount;
- (NSObject *)certificatePropertiesAtIndex:(unsigned int)arg0;
- (NSString *)summaryTitle;
- (NSString *)summarySubtitle;
- (char)isTrusted;
- (NSArray *)summaryDescriptionItems;
- (NSObject *)certificateSubjectSummaryAtIndex:(unsigned int)arg0;
- (NSObject *)certificateIssuerSummaryAtIndex:(unsigned int)arg0;
- (NSObject *)certificateExpirationDateAtIndex:(unsigned int)arg0;
- (char)isRootCertificate;

@end

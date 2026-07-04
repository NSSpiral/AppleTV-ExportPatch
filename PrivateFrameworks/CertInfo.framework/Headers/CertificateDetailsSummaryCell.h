/* Runtime dump - CertificateDetailsSummaryCell
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell
{
    NSArray * _details;
}

@property (retain, nonatomic) NSArray * details;

- (CertificateDetailsSummaryCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (void).cxx_destruct;
- (void)setCertificateTrust:(struct __SecTrust *)arg0 certificateExpiration:(NSDate *)arg1 certificateIsTrusted:(char)arg2;
- (void)setDetailsWithCertificateTrust:(struct __SecTrust *)arg0 certificateExpiration:(NSDate *)arg1 certificateIsTrusted:(char)arg2;
- (NSArray *)details;
- (void)setDetails:(NSArray *)arg0;

@end

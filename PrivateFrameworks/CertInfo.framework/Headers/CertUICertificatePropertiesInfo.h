/* Runtime dump - CertUICertificatePropertiesInfo
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertUICertificatePropertiesInfo : NSObject
{
    NSArray * _sections;
    NSArray * _sectionTitles;
}

@property (retain, nonatomic) NSArray * sections;
@property (retain, nonatomic) NSArray * sectionTitles;

- (CertUICertificatePropertiesInfo *)initWithTrust:(struct __SecTrust *)arg0;
- (NSArray *)sectionTitles;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;
- (void)_setup:(TSCH3DSceneRenderCameraAndSceneTransformSetup *)arg0;
- (CertUICertificatePropertiesInfo *)initWithCertificate:(struct __SecCertificate *)arg0;
- (CertUICertificatePropertiesInfo *)initWithCertificateProperties:(NSArray *)arg0;
- (CertUICertificatePropertiesInfo *)initWithSendableCertificateProperties:(NSDictionary *)arg0;
- (id)_cellInfosForSection:(id)arg0;
- (id)_sectionInfoForCertSection:(id)arg0 title:(NSString *)arg1;
- (NSDictionary *)_sectionsFromProperties:(NSDictionary *)arg0;
- (NSDictionary *)_sendablePropertiesFromProperties:(NSDictionary *)arg0;
- (NSObject *)_sendablePropertiesFromTrust:(struct __SecTrust *)arg0;
- (NSObject *)_sendablePropertyFromProperty:(NSObject *)arg0;
- (NSObject *)_copyPropertiesFromTrust:(struct __SecTrust *)arg0;
- (void)setSectionTitles:(NSArray *)arg0;

@end

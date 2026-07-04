/* Runtime dump - OADConnectorProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADConnectorProperties : OADShapeProperties
{
    OADConnection * mFrom;
    OADConnection * mTo;
}

+ (OADConnectorProperties *)defaultProperties;

- (void)dealloc;
- (OADConnectorProperties *)init;
- (NSString *)description;
- (CKDPIdentifier *)from;
- (NSArray *)to;
- (OADConnectorProperties *)initWithDefaults;

@end

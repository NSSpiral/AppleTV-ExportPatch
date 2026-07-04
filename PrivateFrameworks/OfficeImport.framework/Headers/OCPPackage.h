/* Runtime dump - OCPPackage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCPPackage : NSObject
{
    OCPPackageRelationshipCollection * mRelationships;
    OCPPackageProperties * mProperties;
    NSMutableDictionary * mDefaultContentTypes;
    NSMutableDictionary * mContentTypeOverrides;
}

- (void)dealloc;
- (OCPPackage *)init;
- (NSDictionary *)properties;
- (NSObject *)partForLocation:(NSObject *)arg0;
- (NSObject *)contentTypeForPartLocation:(NSObject *)arg0;
- (void)resetPartForLocation:(NSObject *)arg0;
- (NSString *)relationshipForIdentifier:(NSString *)arg0;
- (NSObject *)partByRelationshipType:(NSObject *)arg0;
- (id)mainDocumentPart;
- (void)readContentTypesXml:(struct _xmlDoc *)arg0;
- (void)readDefaultContentTypeFromElement:(struct _xmlNode *)arg0;
- (void)readContentTypeOverrideFromElement:(struct _xmlNode *)arg0;
- (NSObject *)relationshipsByType:(NSObject *)arg0;
- (OCPPackage *)initWithRelationshipsXml:(struct _xmlDoc *)arg0 propertiesXml:(struct _xmlNode *)arg1 contentTypesXml:(struct _xmlNode *)arg2;

@end

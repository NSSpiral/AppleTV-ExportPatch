/* Runtime dump - OCPPackagePart
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCPPackagePart : NSObject
{
    NSURL * mLocation;
    OCPPackageRelationshipCollection * mRelationships;
    OCPPackage * mPackage;
    struct _xmlDoc * mDocument;
    NSMutableDictionary * mAlternateContentMap;
}

- (void)dealloc;
- (NSData *)data;
- (CLLocation *)location;
- (CKPackage *)package;
- (struct _xmlDoc *)xmlDocument;
- (struct _xmlTextReader *)xmlReader;
- (void)copyToFile:(NSString *)arg0;
- (NSString *)relationshipForIdentifier:(NSString *)arg0;
- (NSObject *)relationshipsByType:(NSObject *)arg0;
- (NSObject *)firstPartWithRelationshipOfType:(NSObject *)arg0;
- (struct _xmlNode *)fallbackNodeForChoiceNode:(struct _xmlNode *)arg0;
- (void)setFallbackNode:(struct _xmlNode *)arg0 forChoiceNode:(struct _xmlNode *)arg1;
- (OCPPackagePart *)initWithLocation:(NSObject *)arg0 relationshipsXml:(struct _xmlDoc *)arg1 package:(struct _xmlNode *)arg2;
- (NSString *)contentType;

@end

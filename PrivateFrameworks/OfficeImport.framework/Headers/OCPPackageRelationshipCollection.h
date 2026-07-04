/* Runtime dump - OCPPackageRelationshipCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCPPackageRelationshipCollection : NSObject
{
    NSMutableDictionary * mIdentifierMap;
    NSMutableDictionary * mTypeMap;
}

- (void)dealloc;
- (NSString *)relationshipForIdentifier:(NSString *)arg0;
- (NSObject *)relationshipsByType:(NSObject *)arg0;
- (OCPPackageRelationshipCollection *)initWithRelationshipsXml:(struct _xmlDoc *)arg0 baseLocation:(struct _xmlNode *)arg1;

@end

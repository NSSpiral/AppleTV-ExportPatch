/* Runtime dump - TSPPackageMetadata
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageMetadata : TSPObject
{
    struct PackageMetadata _message;
}

- (NSString *)packageLocator;
- (TSPPackageMetadata *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (long long)tsp_identifier;
- (struct PackageMetadata *)message;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

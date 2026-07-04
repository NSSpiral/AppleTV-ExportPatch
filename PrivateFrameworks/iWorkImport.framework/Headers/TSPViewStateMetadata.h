/* Runtime dump - TSPViewStateMetadata
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPViewStateMetadata : TSPObject
{
    struct ViewStateMetadata _message;
}

- (TSPViewStateMetadata *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (long long)tsp_identifier;
- (struct ViewStateMetadata *)message;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

/* Runtime dump - TSPDatabaseDataObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseDataObject : TSPObject
{
    TSPData * _data;
}

@property (readonly, nonatomic) TSPData * data;

- (TSPDatabaseDataObject *)initFromUnarchiver:(NSObject *)arg0;
- (TSPData *)data;
- (void).cxx_destruct;

@end

/* Runtime dump - TSPObjectCollection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectCollection : TSPObject
{
    NSArray * _objects;
}

@property (readonly, nonatomic) NSArray * objects;

- (TSPObjectCollection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSPObjectCollection *)initWithContext:(NSObject *)arg0 objects:(NSArray *)arg1;
- (NSArray *)objects;
- (TSPObjectCollection *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_destruct;

@end

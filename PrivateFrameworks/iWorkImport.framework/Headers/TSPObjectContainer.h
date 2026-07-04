/* Runtime dump - TSPObjectContainer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectContainer : TSPObject
{
    unsigned char _packageIdentifier;
    NSArray * _childObjects;
}

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)arg0;

- (NSString *)packageLocator;
- (TSPObjectContainer *)initFromUnarchiver:(NSObject *)arg0;
- (char)shouldDelayArchiving;
- (unsigned int)delayedArchivingPriority;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)didFinishUnarchiving;
- (long long)tsp_identifier;
- (TSPObjectContainer *)initWithContext:(NSObject *)arg0 packageIdentifier:(unsigned char)arg1;
- (void)prepareForComponentWriteWithDelayedObjects:(NSHashTable *)arg0;
- (TSPObjectContainer *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_destruct;

@end

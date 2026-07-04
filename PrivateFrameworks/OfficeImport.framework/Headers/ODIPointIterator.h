/* Runtime dump - ODIPointIterator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIPointIterator : NSObject

+ (ODIPointIterator *)pointsForSpecification:(id)arg0 startingPoint:(unsigned int)arg1 isLast:(char)arg2;
+ (NSDictionary *)processAttributes:(NSDictionary *)arg0 startingPoint:(unsigned int)arg1 isLast:(char)arg2;
+ (void)processSelfAxisFromPoint:(NSObject *)arg0 state:(struct ODIPointIteratorState *)arg1;
+ (void)processChildAxisFromPoint:(NSObject *)arg0 state:(struct ODIPointIteratorState *)arg1;
+ (void)processFollowingSiblingAxisFromPoint:(NSObject *)arg0 state:(struct ODIPointIteratorState *)arg1;
+ (char)isDoneForState:(struct ODIPointIteratorState *)arg0;
+ (char)isPoint:(NSObject *)arg0 ofType:(int)arg1;
+ (char)addPoint:(struct CGPoint)arg0 state:(struct ODIPointIteratorState *)arg1;

@end

/* Runtime dump - CMOutlineState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMOutlineState : NSObject
{
    id counter;
    unsigned int listId;
}

- (CMOutlineState *)init;
- (void)reset;
- (unsigned int)counterAtLevel:(unsigned char)arg0;
- (void)increaseCounterAtLevel:(unsigned char)arg0;
- (unsigned int)listId;
- (CMOutlineState *)initWithListId:(unsigned int)arg0;
- (void)setCounterTo:(unsigned int)arg0 atLevel:(unsigned char)arg1;

@end

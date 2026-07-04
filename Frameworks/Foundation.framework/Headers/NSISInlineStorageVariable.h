/* Runtime dump - NSISInlineStorageVariable
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate>
{
    NSString * _name;
    int _valueRestriction;
    char _shouldBeMinimized;
}

@property (copy) NSString * name;
@property int valueRestriction;
@property char shouldBeMinimized;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (int)valueRestriction;
- (NSObject *)markedConstraint;
- (char)shouldBeMinimized;
- (void)setValueRestriction:(int)arg0;
- (void)setShouldBeMinimized:(char)arg0;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)nsis_valueOfVariable:(id)arg0 didChangeInEngine:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg0;
- (char)nsis_shouldIntegralizeVariable:(id)arg0;
- (char)nsis_valueOfVariableIsUserObservable:(id)arg0;

@end

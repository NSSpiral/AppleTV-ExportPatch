/* Runtime dump - PTSChoiceRow
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSChoiceRow : PTSRow
{
    NSArray * _possibleValues;
    NSArray * _possibleTitles;
    NSArray * _possibleShortTitles;
}

@property (copy, nonatomic) NSArray * possibleValues;
@property (copy, nonatomic) NSArray * possibleTitles;
@property (copy, nonatomic) NSArray * possibleShortTitles;

- (PTSChoiceRow *)init;
- (void)setPossibleTitles:(NSArray *)arg0;
- (NSArray *)possibleTitles;
- (NSArray *)possibleValues:(NSArray *)arg0 titles:(id)arg1;
- (void).cxx_destruct;
- (NSArray *)possibleValues;
- (void)updateWithRow:(id)arg0;
- (void)setPossibleValues:(NSArray *)arg0;
- (void)setPossibleShortTitles:(NSArray *)arg0;
- (NSArray *)possibleShortTitles;
- (id)possibleShortTitles:(NSArray *)arg0;
- (Class)rowTableViewCellClass;

@end

/* Runtime dump - PTSRowTableViewCell
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSRowTableViewCell : UITableViewCell <PTSRowObserver>
{
    PTSRow * _row;
    <PTSRowTableViewCellDelegate> * _delegate;
}

@property (retain, nonatomic) PTSRow * row;
@property (weak, nonatomic) <PTSRowTableViewCellDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PTSRowTableViewCell *)reuseIdentifierForRow:(id)arg0;
+ (float)cellHeightForRow:(id)arg0;
+ (int)cellStyleForRow:(id)arg0;

- (void)dealloc;
- (void)setDelegate:(<PTSRowTableViewCellDelegate> *)arg0;
- (PTSRow *)row;
- (<PTSRowTableViewCellDelegate> *)delegate;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setRow:(PTSRow *)arg0;
- (void)rowDidChangeValue:(id)arg0;
- (void)rowDidChangeTitle:(NSString *)arg0;
- (void)rowDidChangeImage:(UIImage *)arg0;
- (void)updateCellCharacteristics;
- (void)updateDisplayedContent;
- (void)updateDisplayedValue;

@end

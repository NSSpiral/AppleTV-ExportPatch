/* Runtime dump - PSSearchResultsCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchResultsCell : UITableViewCell
{
    char _shouldIndentContent;
    char _shouldIndentSeparator;
}

@property (nonatomic) char shouldIndentContent;
@property (nonatomic) char shouldIndentSeparator;

+ (NSString *)reuseIdentifier;

- (PSSearchResultsCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setTitle:(NSString *)arg0;
- (void)prepareForReuse;
- (void)setDetailTitle:(NSString *)arg0;
- (void)setShouldIndentSeparator:(char)arg0;
- (void)setShouldIndentContent:(char)arg0;
- (void)_resetIndentation;
- (char)shouldIndentContent;
- (char)shouldIndentSeparator;

@end

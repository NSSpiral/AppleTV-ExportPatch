/* Runtime dump - ATVThunderLineScoreView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRImageControl, BRTableView, BRTextControl;
@interface ATVThunderLineScoreView : BRControl
{
    NSDictionary * _data;
    BRTextControl * _homeTeamName;
    BRTextControl * _awayTeamName;
    BRTextControl * _homeTeamScore;
    BRTextControl * _awayTeamScore;
    BRAsyncImageControl * _homeTeamLogo;
    BRAsyncImageControl * _awayTeamLogo;
    BRTextControl * _gamePeriod;
    BRTextControl * _gameTime;
    BRTextControl * _gameState;
    BRImageControl * _lineScoreBG;
    BRTableView * _lineScoreTable;
}

- (void)layoutSubcontrols;
- (long)numberOfColumnsInTableView:(NSObject *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRow:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForColumn:(long)arg1;
- (long)numberOfRowsInTableView:(NSObject *)arg0;
- (long)numberOfHeaderColumnsInTableView:(NSObject *)arg0;
- (NSObject *)tableView:(UITableView *)arg0 itemForRow:(long)arg1 inColumn:(long)arg2;
- (NSObject *)tableView:(UITableView *)arg0 headerForColumn:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForHeaderColumn:(long)arg1;
- (float)headerHeightForTableView:(NSObject *)arg0;
- (NSDictionary *)_teamNameAttributes;
- (NSDictionary *)_scoreAttributes;
- (NSDictionary *)_gamePeriodAttributes;
- (NSDictionary *)_gameTimeAttributes;
- (NSDictionary *)_gameStateAttributes;
- (NSDictionary *)_tableCellAttributes;
- (NSDictionary *)_tableHeaderAttributes;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (ATVThunderLineScoreView *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;

@end

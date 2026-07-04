/* Runtime dump - BRBlockSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface BRBlockSelectionHandler : NSObject <BRSelectionHandler>
{
    id _selectBlock;
    id _playBlock;
}

@property (copy, nonatomic) id selectBlock;
@property (copy, nonatomic) id playBlock;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (char)handlePlayForControl:(BRControl *)arg0;
- (void)setSelectBlock:(id /* block */)arg0;
- (id /* block */)selectBlock;
- (id /* block */)playBlock;
- (void)setPlayBlock:(id /* block */)arg0;
- (void).cxx_destruct;

@end

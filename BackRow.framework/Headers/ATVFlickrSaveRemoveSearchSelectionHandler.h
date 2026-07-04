/* Runtime dump - ATVFlickrSaveRemoveSearchSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface ATVFlickrSaveRemoveSearchSelectionHandler : NSObject <BRSelectionHandler>
{
    NSString * _searchTerm;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVFlickrSaveRemoveSearchSelectionHandler *)selectionHandlerWithSearchTerm:(NSString *)arg0;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (void)dealloc;
- (ATVFlickrSaveRemoveSearchSelectionHandler *)initWithSearchTerm:(NSString *)arg0;

@end

/* Runtime dump - MusicSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface MusicSelectionHandler : NSObject <BRSelectionHandler>
{
    ATVDataClient * dataClient;
    unsigned int clientType;
}

@property (retain, nonatomic) ATVDataClient * dataClient;
@property (nonatomic) unsigned int clientType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (unsigned int)clientType;
- (void)setDataClient:(ATVDataClient *)arg0;
- (void)setClientType:(unsigned int)arg0;

@end

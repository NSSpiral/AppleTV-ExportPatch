/* Runtime dump - RUIYTFavoritesManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol RUIYTDocumentLoaderDelegate;

@class RUIYTDocument, RUIYTDocumentLoader;
@interface RUIYTFavoritesManager : BRSingleton <RUIYTDocumentLoaderDelegate>
{
    char _isDirty;
    NSDictionary * _favorites;
    NSMutableDictionary * _loadingFavorites;
    RUIYTDocumentLoader * _documentLoader;
}

@property (nonatomic) char isDirty;
@property (copy, nonatomic) NSDictionary * favorites;
@property (retain, nonatomic) NSMutableDictionary * loadingFavorites;
@property (retain, nonatomic) RUIYTDocumentLoader * documentLoader;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (RUIYTFavoritesManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)markAsDirty;
- (void)_accountActivity:(id)arg0;
- (NSDictionary *)favorites;
- (void)setFavorites:(NSDictionary *)arg0;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (RUIYTDocumentLoader *)documentLoader;
- (void)setDocumentLoader:(RUIYTDocumentLoader *)arg0;
- (void)setLoadingFavorites:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)loadingFavorites;
- (void)removeAssetWithID:(int)arg0;
- (NSObject *)findAssetWithID:(int)arg0;
- (void)dealloc;
- (RUIYTFavoritesManager *)init;
- (void)reload;
- (void)purge;
- (void).cxx_destruct;
- (void)setIsDirty:(char)arg0;
- (char)isDirty;

@end

/* Runtime dump - SKTileMap
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTileMap : SKNode <NSXMLParserDelegate>
{
    char _loading;
    char _loaded;
    char _skipSprites;
    char _isometric;
    NSXMLParser * _parser;
    int _mapWidth;
    int _mapHeight;
    int _mapTileWidth;
    int _mapTileHeight;
    int _firstGid;
    int _tileWidth;
    int _tileHeight;
    int _spacing;
    int _margin;
    NSString * _imgName;
    NSString * _tilesetName;
    int _imgWidth;
    int _imgHeight;
    int _tileIndex;
    NSString * _layerName;
    int _layerWidth;
    int _layerHeight;
    NSMutableArray * _layerTiles;
    NSString * _mapName;
}

@property (readonly, nonatomic) struct CGSize tileSize;
@property (readonly, nonatomic) struct CGSize mapSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SKTileMap *)tileMapWithName:(NSString *)arg0;

- (void)loadMap;
- (id)textureForGid:(unsigned int)arg0;
- (id)tileAtGridLocationX:(unsigned int)arg0 y:(unsigned int)arg1;
- (struct CGSize)mapSize;
- (SKTileMap *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKTileMap *)init;
- (struct CGSize)tileSize;
- (void).cxx_destruct;
- (void)parserDidStartDocument:(NSXMLParser *)arg0;
- (void)parserDidEndDocument:(NSXMLParser *)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 parseErrorOccurred:(NSError *)arg1;

@end

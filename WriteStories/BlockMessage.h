//
//  BlockMessage.h
//  WriteStories
//
//  Created by YouXianMing on 2018/6/27.
//  Copyright © 2018年 Techcode. All rights reserved.
//

#import "BaseEncodeObject.h"

@interface BlockMessage : BaseEncodeObject

@property (nonatomic)         NSInteger blockId;
@property (nonatomic, strong) NSString *blockFolderName;

@end

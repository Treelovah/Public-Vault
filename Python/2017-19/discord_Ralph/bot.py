# bot.py
import os
import random
from discord.ext import commands


TOKEN = 'NjQ4Nzc5NTk5MjUzMjA5MDk5.XdzidA.F6ZleErEyjX6aiwyqGZeZD8qjgU'
bot = commands.Bot(command_prefix='!')

# Welcome new users with information on how to get started
# Assign ranks to users per request
# 
@bot.event
async def on_ready():
    print(f'{bot.user.name} has connected to KryptSec')

@bot.command(name='1337', help='List of the highest ranked members.')
async def elite(ctx):
    elite_list = ['Tr33', 'Derw', 'Deejay']
    response = elite_list[0:3]
    await ctx.send(response)

@bot.command(name='99', help='Responds with a random quote from Brooklyn 99')
async def nine_nine(ctx):
    brooklyn_99_quotes = [
        'I\'m the human form of the 💯 emoji.',
        'Bingpot!',
        (
            'Cool. Cool cool cool cool cool cool cool, '
            'no doubt no doubt no doubt no doubt.'
        ),
    ]

    response = random.choice(brooklyn_99_quotes)
    await ctx.send(response)

bot.run(TOKEN)
